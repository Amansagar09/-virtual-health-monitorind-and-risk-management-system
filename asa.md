![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.001.png "VBU-New-Logo")
**

**


**ABSTRACT**





With an improvement in technology and miniaturization of sensors, there have been attempts to utilize the new technology in various areas to improve the quality of human life. One main area of research that has seen an adoption of the technology is the healthcare sector. The people in need of healthcare services find it very expensive this is particularly true in developing countries.



` `As a result, this project is an attempt to solve a healthcare problem currently society is facing. The main objective of the project was to design a remote healthcare system. It’s comprised of three main parts. The first part being, detection of patient’s vitals using sensors, second for sending data to cloud storage and the last part was providing the detected data for remote viewing. Remote viewing of the data enables a doctor or guardian to monitor a patient’s health progress away from hospital premises.


`                       `The Internet of Things (IoT) concepts have been widely used to interconnect the available medical resources and offer smart, reliable, and effective healthcare service to the patients. Health monitoring for active and assisted living is one of the paradigms that can use the IoT advantages to improve the patient’s lifestyle. In this project, I have presented an IoT architecture customized for healthcare applications. The aim of the project was to come up with a Remote Health Monitoring System that can be made with locally available sensors with a view to making it affordable if it were to be mass produced.



`  `Hence the proposed architecture collects the sensor data through Arduino microcontroller and relays it to the cloud where it is processed and analyzed for remote viewing. Feedback actions based on the analyzed data can be sent back to the doctor or guardian through Email and/or SMS alerts in case of any emergencies.

The internet of things, or **IoT**, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction.


**INTRODUCTION**

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.002.jpeg)

**Fig shows the architecture of the device**

In this project, we are monitoring various parameters of the patient using internet of things. In the patient monitoring system based on Internet of things project, the real-time parameters of patient’s health are sent to cloud using Internet connectivity. These parameters are sent to a remote Internet location so that user can view these details from anywhere in the world.

There is a major difference between [SMS based patient health monitoring](https://www.projectsof8051.com/patient-monitoring-through-gsm-modem/) and IOT based patient monitoring system. In IOT based system, details of the patient health can be seen by many users. The reason behind this is that the data needs to be monitored by visiting a website or URL. Whereas, in GSM based patient monitoring, the health parameters are sent using GSM via SMS.

This is one of the [Latest Electronics Project Ideas](https://www.projectsof8051.com/electronics-project-ideas/) related to Medical applications which engineering students can select as their final year project. One more benefit of using IOT is that, this data can be seen using a desktop computer, laptop, using an Android smartphone comma using a tab or Tablet. The user just needs a working Internet connection to view this data. There are various cloud service providers which can be used to view this data over Internet. Things speak, Sparkfun and IOTGeek are few famous and easy to use service providers among these.





![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.003.jpeg)

**Fig shows the sensors placements on body**

**PROBLEM  DEFINITION**

- **Existing System:**

In existing system We have seen over the years that the process  is carried manually i.e patients are monitored by nurses or doctors **…** 

- **Disadvantages Of Existing System:**

The process is not only time consuming but also sometimes inefficient resulting in the false marking of health parameters.Today, we need not maintain the live data without a pinch of error margin.

**PROPOSED SYSTEM**

Our system primarily focuses on building an efficient and user friendly web based device for health Monitoring. This system gives live and error free data of patient’s health parameters. These data can be send as an email or message to the patient’s concerned doctor. By this alert system the doctor can immediately treat the patient if they are nearby or can give the consultancy of patient to nearby doctor.  

- **Advantages of Proposed System:**
- It gives 24x7 access to patient health condition.
- Can be operated anytime anywhere by anyone in any condition.
- Emergency situations like heart attack can be easily tackled.
- On time care to the patients.
- Less margin of error**.**

**Need for this device**


Cardiovascular diseases (CVDs) have now become the leading cause of mortality in India. ... The Global Burden of Disease study estimate of  CVD death rate of 272 per 100 000 population in India is higher than the global average of 235 per 100 000 population. When  patients  are at the verge of heart attack then go through several parametric change like:-

- Heavy sweating which changes the patient’s body temperature.

- your [blood pressure](https://food.ndtv.com/health/blood-pressure-the-mystery-number-774471)

- ` `[heart rate](https://food.ndtv.com/health/why-you-shouldnt-take-that-anxiety-attack-lightly-1220917) go up

- A heart attack occurs when the supply of oxygen-rich blood to the heart muscle is disrupted due to certain blockages in the coronary arteries.

- Other warning signs can include unexplained fatigue, paleness, palpitations and anxiety.




The remote health monitoring system can be applied in the following scenarios: 

\1. A patient is known to have a medical condition with unstable regulatory body system. This is in cases where a new drug is being introduced to a patient. 

\2. A patient is prone to heart attacks or may have suffered one before. The vitals may be monitored to predict and alert in advance any indication of the body status. 

\3. Critical body organ situation 

\4. The situation leading to the development of a risky life-threatening condition. This is for people at an advanced age and maybe having failing health conditions. 

\5. Athletes during training. To know which training regimes will produce better results.

- **Working**

**. ![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.004.png)**

**Fig shows the Ecg sensor**

IOT patient monitoring has 3 sensors. First one is a temperature sensor, second is Heartbeat sensor and the third one is ecg sensor. This project is very useful since the doctor can monitor patient health parameters just by visiting website or URL. And nowadays many IOT apps are also being developed. So now the doctor or family members can monitor or track the patient health through the Android apps.

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.005.jpeg)

**Fig showsTemperature sensor**

To operate IOT based health monitoring system project, you need a WiFi connection. The microcontroller or the Arduino board connects to the Wi-Fi network using a Wi-Fi module. This project will not work without a working WiFi network. You can create a WiFi zone using a WiFi module or you can even create a WiFi zone using Hotspot on your smartphone. The Arduino UNO board continuously reads input from these 3 senses. Then it sends this data to the cloud by sending this data to a particular URL/IP address. Then this action of sending data to IP is repeated after a particular interval of time. For example in this project, we have sent data after every 30 seconds

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.006.png)

Fig shows heart beat sensor

. 

The Arduino UNO board continuously reads input from these 3 senses. Then it sends this data to the cloud by sending this data to a particular URL/IP address. Then this action of sending data to IP is repeated after a particular interval of time. For example in this project, we have sent data after every 30 seconds.

**SYSTEM SPECIFICATION**

The project involved analyzing the design of few applications so as to make the application more users friendly. To do so, it was really important to keep the navigations from one screen to the other well ordered and at the same time reducing the amount of typing the user needs to do. In order to make the application more accessible 

This device demonstrated through a defined architecture design, including hardware and software dealing with wearable devices, sensors, smart phones, medical application, and medical station analyzers for further diagnosis and data storage

- **Technologies and Languages used to Develop**

- Python
- Arduino programming
- Cloud computing
- HTML

**Software Requirements**
**


`  `For developing the application the following are the    Software Requirements:

1. Arduino software( for programming)
1. Word press(for website)

-phttp://ucetian.ml/

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.007.png)

1. Cayenne cloud (cloudaccess) 



![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.008.png)

1. Circuito.io.com

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.009.png)

1. Arduino .cc

**Hardware Requirements**
**


For developing the application the following are the Hardware Requirements:

- Male to male connector.
- Female to female connector.
- Female to male connector.
- Breadboard.
- 9V Duracell battery.
- Cup connector.
- Ardino nano.

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.010.jpeg)


- **ESP826 (nodemcu. )**

Both esp8266 and nodemcu can be used as a gateway


![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.011.png)

**Fig shows the nodemcu pinout**


- 7805 regulator chip.( used to regulate the voltage of devices)


- 300 nF & 100nF capacitor.(for power maintainance)



- Heart beat sensor

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.012.jpeg)

- Temperature sensor

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.013.jpeg)

- E.C.G sensor.

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.014.jpeg)
**


CHALLENGES AND BOTTLENECKS

- Simple and secure connectivity
- Power consumption
- Reduced risk in data loss

**CONCLUSION**

In preparing this paper, we studied the literature from various points of view. Based on consultation with expert scientists in environmental engineering and medicine, we believe that, motion trackers, gas detectors, and vital signs are the most important elements in health monitoring; therefore, to achieve the full range of health monitoring, all these parameters were studied. In each field, a variety of methodologies are employed, but not all are efficient and effective. The most important criteria in this study was the possibility of using the device in the real world, performance, efficiency, and power consumption. In addition, we considered the price of each device. Finally, the most challenging bottleneck and some conclusions regarding the promising future in the IoT is presented


**FUTURE SCOPE;**

Future development:

We can add a GPS module in IOT patient monitoring using Arduino Uno and WiFi module project. This GPS module will find out the position or the location of the patient using the longitude and latitude received. Then it will send this location to the cloud that is the IOT using the Wi-Fi module. Then doctors can find out the position of the patient in case they have to take some preventive action. 

`                                `We can use artificial intelligence to enhance its live monitoring so that doctors  can feel like a human interacting to alert them.

`                                `We can further add the technology of machine learning which will cure the patients according to their need without the need of any doctors. 

![](Aspose.Words.180d56cf-79bb-49a9-834a-f0432e347198.015.jpeg)




**Acknowledgments**


**We would also like to express our gratitude to instructor  “*isaisah kumar*”  where we perceive our knowledge in internet of things and cloud computing and our project is guided by “suvir kumar” he provide us valuable technical guidance and sharing his knowledge to complete this work.**










**BIBLIOGRAPHY**

`  `**References from following websites :-**

**[1] “Arduino Architecture”** 

[**https://www.engineersgarage.com/what-is-gsm-gprs-module**](https://www.engineersgarage.com/what-is-gsm-gprs-module)

` `**[Oct. 1, 2017]** 

**[2] “Systems design” <https://en.wikipedia.org/wiki/Systems_design>** 

**[Oct. 15, 2017]**

[**https://www.circuito.io/**](https://www.circuito.io/)

[**https://www.arduino.cc/en/Tutorial**](https://www.arduino.cc/en/Tutorial)

[**https://cayenne.mydevices.com/cayenne/dashboard/device/96342ec0-965c-11e8-8fba-979723b0b5e0**](https://cayenne.mydevices.com/cayenne/dashboard/device/96342ec0-965c-11e8-8fba-979723b0b5e0)





**   





