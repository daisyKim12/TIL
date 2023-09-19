# How to connect database from a cluster to local Datagrip

## ssh 
SSH stands for Secure Shell Protocol, which is one of the network protocols used for secure communication when computers communicate with each other over a public network like the internet. It is commonly used for the following purposes:

1. Data Transfer: One common use case is for data transfer, such as when pushing source code to a remote repository like GitHub. When you push code to a remote repository, you use SSH to securely transmit the files.
2. Remote Control: Another important use is for remote control. If you are studying web development, you might have used cloud services like AWS (Amazon Web Services). To access and issue commands on an AWS instance server, for example, you need to connect via SSH.

**password**
SSH does not rely on the usual method of connecting by entering a password when communicating with another computer.
By default, SSH establishes a connection and goes through an authentication process using a pair of keys. These two keys are as follows:

1. Private Key: The private key is kept secret and should remain confidential. It is stored securely on your local computer.
2. Public Key: The public key is shared and can be freely distributed to other computers or servers. It is stored on the remote server you want to connect to.

## Server Cluster
A server cluster refers to the grouping of multiple individual servers to operate as a single system, providing high availability services to clients. When servers are clustered, if one server within the cluster experiences a failure, the point of service shifts to other healthy servers within the same cluster. Server clusters enable users to receive server-based information continuously and without interruption.

Clusters use two or more systems to provide a higher level of availability, security, and scalability compared to relying on a single system. Cluster technology addresses three types of failures:

- High Availability: Ensuring that services remain available even if one server in the cluster fails.
- Safety: Protecting against data loss or system failure through redundancy and backups.
- Scalability: Allowing the cluster to handle increased load and demand by adding more servers to the cluster.

## SSh tunneling??