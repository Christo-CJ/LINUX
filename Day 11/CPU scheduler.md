## CPU Scheduler
A CPU scheduler unit running in disputer is responsible for selecting the next process.

## Scheduling Queues
Once process is loaded then it is loaded into job queue(PCB stored).  

The long term schedule moves the PCB in job is loaded into ready queue.  
For queue events with scanf/external events the PCB is loaded into device queue done by long term scheduler.  

For simple system there is no long term scheduler the work is taken care by CPU.

## Goal of CPU scheduling  
- Maximum utilization ,throughput and fairness.  
- Minimise turnaround time,waiting time and response time.

## Premptive Scheduling
After time slice if the process stays then forceful removing is premptive.  
Non premptive: 
process itself leaving before the time slice expires these scheduling are done by process manager.  

## Scheduling policies
- FIFO
- Round Robin
- Shortest Job First(SJF)
- priority Schedule
- Multi Feedback Queue

## FIFO

The CPU based on order of request,Non premptive,first come first served.  
Process keeps running until terminated/removed.  
so,short job can get stuck behind long job,turnaround time is not ideal.

## Round Robin

Periodically releases the CPU from long running job.
- Based on time interupt
- Preemptive
- Time slice
    - Too long acts like FIFO
    - Too short Throughput suffers
 
## FIFO VS Round Robin

If context switch time is zero ,round robin is better.  
If process have equal length Fifo is better.

## Short Job First (SJF)

Longer process gets behind.Good in terms of Turnaround time.Great for short jobs.  
Disadvantage starvation of long process.  

## Multilevel Feedback Queue

Mixture of policies,multiple queue with diferent priority.  

