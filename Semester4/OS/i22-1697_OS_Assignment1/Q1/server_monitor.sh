# ! / b i n / b a s h
readonly DISK_THERSHOLD=30
readonly CPU_THERSHOLD=3
readonly MEMORY_THERSHOLD=30
disk_usage=$(df -P / | awk 'NR==2 {gsub("%","",$5); print int($5)}')
if [ $disk_usage -gt $DISK_THERSHOLD ]; then
    echo "Disk Thershold Exceeded ,Thershold was :$DISK_THERSHOLD%:Usage was:$disk_usage%" 
fi
echo "$(date +'%Y-%m-%d %H:%M:%S') Disk usage:$disk_usage%,Thershold:$DISK_THERSHOLD%" >>file.log
cpu_idle=$(top -bn1 |awk 'NR==3 {print int($8)}')
cpu_used=$((100-$cpu_idle))
if [ $cpu_used -gt $CPU_THERSHOLD ]; then
    echo "CPU Thershold Exceeded ,Thershold was :$CPU_THERSHOLD%:Usage was:$cpu_used%" 
fi
echo "$(date +'%Y-%m-%d %H:%M:%S') CPU usage:$cpu_used%,Thershold:$CPU_THERSHOLD%" >>file.log
total_mem=$(free -m | awk 'NR==2 {print int($2)}')
used_mem=$(free -m | awk 'NR==2 {print int($3)}')
used_mem_prcnt=$(($used_mem*100/$total_mem))
if [ $used_mem_prcnt -gt $MEMORY_THERSHOLD ]; then
    echo "Memory Thershold Exceeded ,Thershold was :$MEMORY_THERSHOLD%:Usage was:$used_mem_prcnt%" 
fi
echo "$(date +'%Y-%m-%d %H:%M:%S') Memory usage:$used_mem_prcnt%,Thershold:$MEMORY_THERSHOLD%" >>file.log
if ! logrotate -v log_rot.conf > /dev/null 2>&1; then
    echo "Log rotation failed!Please check the menu to set permissions accordingly!"
fi
