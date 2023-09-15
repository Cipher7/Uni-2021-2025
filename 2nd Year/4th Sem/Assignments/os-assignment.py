def fifo_scheduling(processes, arrival_time, burst_time):
    n = len(processes)
    completion_time = [0] * n
    waiting_time = [0] * n
    turnaround_time = [0] * n
    
    total_time = 0
    
    for i in range(n):
        if arrival_time[i] > total_time:
            total_time = arrival_time[i]
        
        completion_time[i] = total_time + burst_time[i]
        waiting_time[i] = total_time - arrival_time[i]
        turnaround_time[i] = completion_time[i] - arrival_time[i]
        
        total_time = completion_time[i]
    
    avg_waiting_time = sum(waiting_time) / n
    avg_turnaround_time = sum(turnaround_time) / n
    
    return turnaround_time, avg_waiting_time

def main():
    processes = [1, 2, 3, 4]
    arrival_time = [0, 1, 2, 3]
    burst_time = [6, 8, 7, 3]
    
    print("FIFO Scheduling:")
    fifo_turnaround_time, fifo_avg_waiting_time = fifo_scheduling(processes, arrival_time, burst_time)
    print("Turnaround Time:", fifo_turnaround_time)
    print("Average Waiting Time:", fifo_avg_waiting_time)
    
if __name__ == "__main__":
    main()