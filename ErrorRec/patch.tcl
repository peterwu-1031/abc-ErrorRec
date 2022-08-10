yosys -import

set file [open "cec_blif/model.txt" r]
set file_data [read $file]
close $file
set data [split $file_data "\n"]
foreach line $data {
     read_blif $line
}

synth -flatten
techmap; opt
#abc -g AND,NAND,OR,NOR,XOR,XNOR
#abc -g all
abc -liberty lib/typical.lib