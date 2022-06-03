# About This Repository
This sample is created by [Beckhoff Automation LLC.](https://www.beckhoff.com/en-us/), and is provided as-is under the Zero-Clause BSD license.

This example shows how to catch an exception within a TE1400 generated PLC function block, create a memory dump file, and reset the TcCOM object. 
TwinCAT continues to run through the exception. 
Analysis of the exception/memory dump file is done using windows debugger.


![image](https://user-images.githubusercontent.com/19829308/171736513-46c10c1f-8b97-4aa6-a1e6-087b2e98cd15.png)
![image](https://user-images.githubusercontent.com/19829308/171736521-3cc8b0c0-a9c3-42c1-9d33-cfe78f7a23c8.png)

![image](https://user-images.githubusercontent.com/19829308/171737100-b23d31e4-92ef-4a8b-8e88-527ad394c8b9.png)

![image](https://user-images.githubusercontent.com/19829308/171737266-be94eb49-7eec-46bf-9c60-256ccb74242d.png)


# How to get support

Should you have any questions regarding the provided sample code, please contact your local Beckhoff support team. Contact information can be found on the official Beckhoff website at https://www.beckhoff.com/en-us/support/.

# Further Information

Further Information on Exception handling in TE1400 can be found at the [Beckhoff Infosys](https://infosys.beckhof.com) under the [TE1400 -> From version 2.x.xxxx.x -> Application of modules in TwinCAT -> Exception handling](https://infosys.beckhoff.com/content/1033/te1400_tc3_target_matlab/11335410315.html?id=3885529162355206359)

## Requirements

- [TE1000 TwinCAT 3 Engineering](https://www.beckhoff.com/en-en/products/automation/twincat/te1xxx-twincat-3-engineering/te1000.html) version 3.1.4024.22 or higher
- TwinCAT XAR version >= 3.1.4024.22
- Beckhoff TwinCAT Tools for Matlab version >= 2.3.1.0 
- Matlab version >= 2019a
- See setup notes from Exception handling [Exception handling](https://infosys.beckhoff.com/content/1033/te1400_tc3_target_matlab/11335410315.html?id=3885529162355206359)
