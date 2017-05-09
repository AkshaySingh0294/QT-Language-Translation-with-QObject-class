# Language-Translation-in-with-QObject-class
Hai guys, this is the project for QT-Translation technique using Linguistic Feature of QT. This project is written in c++ and there is no use of QWidget class anywhere in the project. This is for QObject class only.

This is for Beginner, just like me.

# Here are the steps->
1)-> First of all we need to configure our QT. I know about Ubuntu configuration so for Window and IOS am unaware right now. So for ubuntu, First check from the terminal which Version of qt your Terminal is accessing. 
# Type-> lupdate
If it is not found, then it will show a path, that where is it accessing in your system. There You will know Which version of QT your terminal is accessing.

# QT4
# Type-> sudo apt-get install qt4-linguist-tools


# QT5
# Type-> sudo apt-get install qttools5-dev-tools

# run lupdate again.
If you see list of some commands that can be used with lupdate then. There it is done.


Now->
2)->Create your project. Make Every statement that you want to translate in qsTr() format. Becouse Linguist can Recognize this format only from qml side.

3)-> Open your projects pro file. and add below lines, make sure you use this format only for brackets. It recognizes the file name in the form of path to that file only.

lupdate_only{

 SOURCES += main.qml somefolder/somefile.qml somefoleder/someotherfolder/someotherfile.qml
 
 SOURCES += something.qml
 
}

(may be this will be not shown perfectly in my .md file ...so pls refer my .pro file)

4)->Once you are done with this then open the terminal in your project's folder and type->
# lupdate -pro yourProjectProFileName.pro -ts anyCoolerName.ts

If it recognize any statement then it will show you the number of the statement there. If number is 0 then You should check lupdate_only block in pro file.Am again telling write your block of lupdate in given format only as in my .pro file.

5)-> Open your .ts file from folder and for each line add your translation statement. and save the file. 
6)-> again from terminal type->
# lrelease yourtsfilename.ts
It will create a qm file with no. of translations.


8)-> IN your project add resource file and delete line written in prefix field and add .qm file to it. and save it. 

9)->Now rest of the thing is to be done with qt's cpp module. So create a class or function or whatever to make it Dynamicly control the language as given in my hhhh.cpp/.h file and Make a Q_PROPERTY of QString with getter and signal only.

create getter functon of the property.
now wherever you want to change the translation.

Type->
 Change the translation as given in my hhhh.cpp file's call() function and emit the signal of Q_PROPERTY.
 
 In main file make your class funtions accessible by using rootContext()
 
 In your qml file wherever your qsTr() statement is written
 
 make the changes as -> 
 
 qsTr("Hello") + languageTranslator.yourQStringPropertyname
 
 
 
 I hope this may help you. 
 
 Sorry for english mistakes and Thanks for noticing this project.


