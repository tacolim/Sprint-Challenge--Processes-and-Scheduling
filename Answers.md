1. The answer is _b. P1: 0 - 64,000; P2: 0 - 64,000_ because the memory allocation does not have to be contiguous.  The two processes would take up that amount total in any of those locations.


2. Process States
* New/Created - awaits admission to the 'Ready' State which would happen pretty automatically on most desktop computer systems, but in a realtime system may be delayed to prevent oversaturation of system resources.
* Ready - process loaded into main memory and awaiting execution normally in a run queue.
* Running - process moves into this state when it is chosen for execution and the instructions are executed.
* Blocked - cannot carry on without unmet external need such as input from a user or looking for an unavailable external device (like a printer).
* Terminated - completed execution or was killed. Process is held in this state as a zombie until a parent process calls wait() to read its exit status and end the process lifecycle.


3. I cannot test this on my own machine as I was never able to get this working (I have an old mac OS and cannot update it enough to run this process), but as question 4 says printf is faster, I'm going to assume it would be faster on my machine as well.


4. Printf does not call write every time but only as it needs it. It stores results in a memory buffer so it doesn't need to call write every time. Printf accessing its buffer vs calling write saves a lot of time.