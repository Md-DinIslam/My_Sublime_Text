for((i = 1; ; ++i)); 
do
    echo $i
    ./gen $i > input.txt
    # ./a < input_2 > output.txt
    # ./brute < input_2 > output_2
    # diff -w output.txt output_2 || break
    diff -w <(./test_01 < input2) <(./test_02 < input2) || break
done