# Compiler Installation Guide (C / C++)

This guide will help you install **gcc and g++ compilers** on your system.  
Choose your operating system below and follow the steps.

---

## 📂 Jump to Section

-  Android Users: [Tap here to get a C/C++ compiler](https://play.google.com/store/search?q=C%20compiler&c=apps)
-  [For Windows](#1-the-procedure-to-install-c-and-c-in-windows-os)
-  [For Ubuntu/Linux](#2-the-procedure-to-install-gcc-and-g-compiler-in-ubuntu-linux-os)
-  [For macOS](#3-the-procedure-to-install-c-and-c-in-macos) 

---

## 1. The procedure to install C and C++ in Windows OS

1. To follow the installation procedure, you need to be connected to the internet.

2. For Windows OS, we will install the MinGW compiler.

3. Go to: http://sourceforge.net/projects/mingw/files/Installer/

4. Locate the executable file mingw-get-setup.exe.

5. Click on this .exe file.

6. A dialog box will appear prompting you to either Run or Save the file.

7. If you click on the Run button, the Installation Wizard will open.

8. If you click on the Save button, go to the location where you saved the file and double-click on the .exe file. This will open the Installation Wizard.

9. Click on the Install button.

10. Then click on the Continue button.

11. Again, click on the Continue button.

12. Click on the "mingw32-gcc-g++ GNU C++ Compiler" checkbox and select "Mark for Installation".

13. Also check the option for "mingw32-gcc-objc The GNU Objective-C Compiler" and click on "Mark for Installation".

14. Click on the Installation option in the top left-hand corner.

15. Then click on the Apply Changes button.

16. Once again, click on the Apply button.

17. Finally, click on the Close button. This will install gcc and g++ compilers on your system.

18. Close the window.

19. Next, we need to set the path for the System Variables.

20. Right-click on My Computer or search for "This PC" in the Windows search bar.

21. In Windows 10, right-click on "This PC".

22. Click on Properties.

23. Then click on the Advanced tab or Advanced System Settings.

24. Click on Environment Variables.

25. Under System Variables, select Path.

26. Double-click on Path.

27. This will open the Edit System Variable dialog box.

28. In Variable value, type the location where the bin folder is present.

29. Add a semicolon (;) before adding the path.  
   Example: ;C:/MinGW/bin

30. This will avoid overwriting previously set paths.

31. Now, open the Command Prompt and type: gcc -v, then press Enter.

32. This will display the version number of gcc installed.

33. This shows that the installation is successfully done.

---




## 2. The procedure to install gcc and g++ compiler in Ubuntu Linux OS

1. To follow the installation procedure, you need to be connected to the internet.

2. To install the g++ compiler manually, open the terminal by pressing Alt + CTRL + T keys together.

3. Type: sudo apt-get install g++

4. It will prompt for a password.

5. Type your password.

6. Disk space will be displayed, and you will be asked to confirm and proceed.

7. Confirm by typing "Y".

8. The installation will take a few minutes.

9. g++ will get installed.

10. To check the installation, type: g++ -v

11. The version of gcc / g++ will be displayed.

12. This shows that the installation is successfully done.

---


## 3. The procedure to install C and C++ in macOS

1. Open Terminal.

2. Type: xcode-select --install

3. Press Enter.

4. A dialog box will appear. Click on Install.

5. Wait for the installation to complete.

6. To verify installation, type: gcc --version

7. The version will be displayed.

8. This shows that the installation is successfully done.

---

➡️ **Next:** [Your First Program](./YOUR_FIRST_PROGRAM.md)  
❓ **FAQs:** [Click here](./FAQ.md)



   
