# Green Efficiency Analysis

## Measurement Methodology

To evaluate the efficiency of the provided programs, execution times were measured using the Unix `time` command. Each program was compiled with the same optimization level and executed under identical system conditions. Measurements were repeated three times for each program, and the average runtime was calculated to reduce variability.

For `baseline_loop`, the recorded execution times were:

- Run 1: 1.192 seconds  
- Run 2: 1.294 seconds  
- Run 3: 1.300 seconds  

Average execution time: **1.262 seconds**

For `instrumentation_lab`, the recorded execution times were:

- Run 1: 0.002 seconds  
- Run 2: 0.001 seconds  
- Run 3: 0.002 seconds  

Average execution time: **0.002 seconds**

All measurements were performed on the same machine with minimal background processes. Only the real (wall clock) time was considered, reflecting the total time experienced by the system.

## Observed Performance Differences

The recorded outputs show a stark contrast between the two programs. `instrumentation_lab` completes in an average of 0.002 seconds, while `baseline_loop` averages 1.262 seconds. 

This represents a difference of **1.260 seconds per execution**, meaning `instrumentation_lab` runs approximately **630 times faster**:

(1.262 - 0.002) / 0.002 ≈ 630

This significant difference was consistent across all three measurement trials, confirming that `instrumentation_lab` is far more computationally efficient than `baseline_loop`.

## Relation Between Runtime and Energy Consumption

Energy consumption in computing is directly related to CPU active time. Since `instrumentation_lab` executes drastically faster than `baseline_loop`, the processor spends far less time active per execution. This reduction in runtime directly correlates with lower energy usage.

Over repeated executions, the savings become substantial. For example, executing each program 10,000 times would save approximately 12,600 seconds of total processing time when using `instrumentation_lab`. This efficiency translates into reduced energy consumption and resource usage, making it a greener solution.

## Limitations of the Experiment

One limitation is that energy consumption was **inferred from runtime** rather than measured directly using power-monitoring tools. While runtime is a strong indicator, actual energy usage may vary depending on CPU load and system conditions.

Additionally, tests were conducted on a single machine. Different hardware architectures, background processes, or compiler settings could alter the results. Despite averaging multiple runs, external factors cannot be fully eliminated.

## Practical Engineering Takeaway

This experiment demonstrates the dramatic impact of algorithmic efficiency on both runtime and energy consumption. `instrumentation_lab` outperforms `baseline_loop` by several orders of magnitude, completing the same computation almost instantly.

From an engineering perspective, this highlights the importance of profiling and optimizing code. Efficient algorithms not only improve performance but also reduce energy usage, which is critical for large-scale or repeated computations. Measurements should guide optimization decisions rather than assumptions, ensuring empirically backed, energy-conscious engineering choices.
