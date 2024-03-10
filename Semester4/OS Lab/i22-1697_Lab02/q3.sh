# ! / b i n / b a s h
touch q3a.sh
echo "# ! / b i n / b a s h" >q3a.sh
echo "date" >>q3a.sh
echo "echo Name : $1" >>q3a.sh
echo "echo total Marks  : $2" >>q3a.sh
echo "echo English : $3" >>q3a.sh
echo "echo Urdu : $4" >>q3a.sh
echo "echo Maths : $5" >>q3a.sh
chmod +x q3a.sh
./q3a.sh
