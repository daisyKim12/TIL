# JAVA basic

## JVM

## How to install JDK(Java Development Kit) 17

Install JDK 17
```
sudo apt update
sudo apt install openjdk-17-jdk
```

Check JAVA version
```
java -version
```

Set env path
```
sudo vi/etc/environment
```
```
PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
JAVA_HOME="/usr/lib/jvm/java-17-openjdk-amd64"
```

Check env path settings
```
source /etc/environment
echo $JAVA_HOME
```

## How to run JAVA program

Compile `.java` file
```
javac Test.java
```

Execute `.class` file
```
java Test
```