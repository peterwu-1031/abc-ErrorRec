# cec -a netlist1.v netlist2.v 

1. Do CEC and generate all error patterns if two circuits are nonequivalent.

2. All output files will be generated in “cec_output” folder. 

3. Filename.txt stores all names of files storing error patterns. 

4. InputID.txt stores the relationship between inputs and patterns. 

5. 0>1(1>0) means that netlist1 prints 0(1) and netlist2 prints 1(0).

# cec -b netlist1.v netlist2.v

1. Do CEC and generate all error patterns if two circuits are nonequivalent.

2. Generate a patch(patch.blif) for netlist1 and several subcircuits in 'cec_blif' folder. (Similar to Cadence LEC)
