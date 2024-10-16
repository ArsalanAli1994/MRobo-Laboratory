# MRobotic Laboratory
The "Robotic Control Dashboard Application" built with QT (version 5.0) is a software tool developed using the QT framework, specifically version 5.0. This application serves as a control interface for an Arduino-based robotic car. 

The robotic car is powered by an L298N motor driver, which controls the motors responsible for its movement. Additionally, it is equipped with a Bluetooth wireless module, specifically the HC-05 module, which facilitates wireless communication between the car and the control dashboard application.

The QT framework allows developers to create graphical user interfaces (GUIs) for applications across various platforms. In this case, the Robotic Control Dashboard Application likely provides users with a user-friendly interface through which they can interact with the robotic car. This interface may include buttons, sliders, or other controls for sending commands to the car.

Using the Bluetooth connection established between the application and the HC-05 module embedded on the robotic car, users can wirelessly send commands to control the car's movements. These commands are interpreted by the Arduino microcontroller onboard the car and translated into actions for the L298N motor driver, enabling the car to move forward, backward, turn left or right, and perform other functions as required.

In summary, the Robotic Control Dashboard Application built with QT (v5.0) simplifies the process of controlling the Arduino-based robotic car by providing an intuitive GUI and enabling wireless communication via Bluetooth.

<!-- Improved compatibility of back to top link: See: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a name="readme-top"></a>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
<!-- [![CircleCI](https://circleci.com/gh/AlexeyAB/darknet.svg?style=svg)](https://circleci.com/gh/AlexeyAB/darknet)
[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](https://github.com/AlexeyAB/darknet/blob/master/LICENSE) -->


<!-- PROJECT LOGO -->
<br />
<div align="center">
  <!-- <a href="https://ifttt.com/maker_webhooks">
    <img src="https://arduinodiy.files.wordpress.com/2018/01/webhookslogo.png" alt="Logo" width="80" height="80">
  </a> -->
  <h3 align="center">MRobotic Lab v1.0</h3>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The API</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <!-- <li><a href="#roadmap">Roadmap</a></li> -->
    <!-- <li><a href="#contributing">Contributing</a></li> -->
    <!-- <li><a href="#license">License</a></li> -->
    <li><a href="#contact">Contact</a></li>
    <!-- <li><a href="#acknowledgments">Acknowledgments</a></li> -->
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

This Robotic car controller software contains the following features regarding hardware and Software

* Arduino Nano Atmel Atmega328p as a main controller device.
* Bluetooth Module HC-05 contain Both master-slave feature capable of recieving both incoming and outgoing data.
* L298n MOTOR driver to drive motors and PWM speed control feature control by Arduino.
* Vehicle Contain the four major movements: Forward, Backward, Turn Left, Turn Right and Two extra Movements: Pivot Right Rotate and Pivot Left Rotate.
* Main Arduino Controller to interprate the incoming command from bluetooth device(laptop).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With
This section should list any major frameworks/libraries involved in the project.

* QT framework v5
* Arduino lib - Software Serial
<!-- * [![https][https]][Https-url] -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>
<!-- GETTING STARTED -->
## Getting Started
This section provides the instruction how to setup the API on the system.

### Prerequisites

* Arduino IDE
* Microsoft Visual Studio 2019

### Installation

_Below is an example of how you can instruct your audience on installing and setting up your app. This template doesn't rely on any external dependencies or services._


1. Clone the repo
   ```bash
   git clone https://github.com/ArsalanAli400/Mroboticlab.git
   ```
2. Arduino IDE Installation:  Install the Arduino Integrated Development Environment (IDE) on your desktop device. This software allows you to write, compile, and upload code to the Arduino microcontroller onboard the robotic car.
3. MS Visual Studio Installation: Install VS software for Code Compilation
4. Setup Qt Framework for MS Visual Studio(Explanation can be found on Youtube).
5. Make a hardware Setup for 4 motor based vehicle using L298N and burn the .ino code via Arduino IDE to Nano controller.
6. Use VS to .sln file and build the project using release settings.
7. Fulfil all the recommanded files for release settings
<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- USAGE EXAMPLES -->
## Usage
Take the following steps to startup the Robotic Vehicle Setup
1. Run Robotic Laboratory Software.
2. Go to Bluetooth settings on the laptop and pair the device for HC-05 and Computer Automatic map the device on the com port(devcie manager)
3. Select the HC-05 from the menu.
4. Select the Com port that has been mapped for HC-05 and click the connect button and see if the device is going live with green indication.
5. Use Arrow keys on the keyboard to move the robot, plus(+) and minus(-) to increase and decrease the speed on the Vehicle. and PageUP and Pagedown button for Pivot Movements.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
<!-- ## Roadmap

- [x] Add Changelog
- [x] Add back to top links
- [ ] Add Additional Templates w/ Examples
- [ ] Add "components" document to easily copy & paste sections of the readme
- [ ] Multi-language Support
    - [ ] Chinese
    - [ ] Spanish

See the [open issues](https://github.com/othneildrew/Best-README-Template/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->



<!-- CONTRIBUTING -->
<!-- ## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request -->

<!-- <p align="right">(<a href="#readme-top">back to top</a>)</p> -->



<!-- LICENSE -->
<!-- ## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->



<!-- CONTACT -->
## Contact

<!-- Your Name - [@your_twitter](https://twitter.com/a) - arsalan.ali.safeer@gmail.com -->

Project Link: [https://github.com/ArsalanAli400/Mroboticlab](https://github.com/ArsalanAli400/Mroboticlab.git)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
<!-- ## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

<p align="right">(<a href="#readme-top">back to top</a>)</p> -->



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
<!-- [contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555 -->
[linkedin-url]: https://www.linkedin.com/in/arsalan-ali-safeer-b618b41a8/
<!-- [product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com  -->