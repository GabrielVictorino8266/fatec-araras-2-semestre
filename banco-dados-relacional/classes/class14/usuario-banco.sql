/*
So, this code creates a new user named 'teste' with the password '1234' and allows them 
to connect from the local machine.
*/

CREATE USER 'teste'@'localhost' IDENTIFIED BY '1234';

/*
    The GRANT command is used to give privileges to database users. 
    The PRIVILEGES argument is optional and can be one of the following: 
    SELECT, INSERT, UPDATE, DELETE, DROP, INDEX, ALTER, CREATE, or ALL.
    The ON argument is optional and can be used to specify the table(s) 
    that the user is granted privileges on.
*/

GRANT SELECT, INSERT, UPDATE, DELETE ON *.* TO 'teste'@'localhost'; -- Example

GRANT SELECT ON empresa.cliente TO 'teste'@'localhost';