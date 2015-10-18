use php_blog;
# ************************************************************
# rankun203
# Version 4135
#
# Host: 127.0.0.1 (MySQL 5.6.22)
# Database: php_blog
# ************************************************************

# table users
# ------------------------------------------------------------

DROP TABLE IF EXISTS `users`;

CREATE TABLE `users` (
  `id`        INT(11)     NOT NULL AUTO_INCREMENT,
  `username`  VARCHAR(50) NOT NULL,
  `password`  VARCHAR(50) NOT NULL,
  `email`     VARCHAR(50) NOT NULL,
  `join_date` DATETIME    NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
)
  DEFAULT CHARSET = utf8;

INSERT INTO `users` (`id`, `username`, `password`, `email`, `join_date`)
VALUES (1, 'zhangbo', '96e79218965eb72c92a549dd5a330112', 'zhangbo@qq.com', '2015-10-18 09:26:45');

SELECT * FROM blog
WHERE 1=1;