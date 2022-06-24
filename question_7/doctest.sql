--- CREATE TABLES

CREATE TABLE dogs(
	id INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL   
);

CREATE TABLE cats(
	id INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL   
);

--- INSERT VALUES

insert into cats (id,name) values (1,'Mia');
insert into cats (id,name) values (2,'Maggie');
insert into cats (id,name) values (3,'Nina');

insert into dogs (id,name) values (1,'Nina');
insert into dogs (id,name) values (2,'Luna');
insert into dogs (id,name) values (3,'Lolla');

--- INPUT -> SOLUTION QUERY

SELECT * FROM cats;

SELECT name FROM (
    SELECT name FROM dogs
    UNION ALL
    SELECT name FROM cats) as sql
GROUP BY name
HAVING COUNT(*) = 1;

--- OUTPUT

/*
Maggie
Luna
Lolla
Mia
/*

