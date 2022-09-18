#pragma once

// 동물병원
// 동물의 이름, 동물의 종류, 동물 고유 코드
// 뽀삐라는 개가 2마리 이상일 수 있으니 동물 고유 코드로 구분

struct MyStruct {
	char name[100];
	char speices[100]; //doge, cat
	char code[100]; //고유 코드가 00007 이런식이며 "문자열"로 저장해야함 / int로 하면 00007이 7이 됨


}typedef Animal;

// 내가 만들고 싶은 거

struct Food {
	int price;
	char name[100];

}typedef Food;


struct StudentScore {

	int kor;
	int eng;
	int math;

}typedef StudentSocre;

struct KBStudent {
	
	int cSocre;
	int javaSocre;
	char name[100];

}typedef KBStudent;