CREATE DATABASE versioned_test;
USE versioned_test;

SHOW TABLES;

create table documents
(
  id int AUTO_INCREMENT,
  version_number int ,
  title VARCHAR(255),

)