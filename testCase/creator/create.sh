value=1
for ((i = 0; value <= 10000000; i++)); do
    ./createAscData $value >./../asc_$i.txt &
    ./createDescData $value >./../desc_$i.txt &
    for ((r = 0; r < 8; r++)); do
        ./createRandomData $value >./../rnd_$i\_$r.txt &
    done
    value=$((value * 2))
    echo $i
done
