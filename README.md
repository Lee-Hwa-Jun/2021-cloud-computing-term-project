# Project - IoT management ChatBot
    
## 프로젝트 멤버 및 역할
>* 박건형
>   * 카카오톡과 하드웨어 연결
>   * Lambda –iot메세지처리  iot-하드웨어 메세지처리
>* 황현진
>   * 카카오톡 챗봇 구현
>   * Lambda 데이터 전송 처리 구현
>* 이화준
>   * 아두이노 Servo 동작 구현
>   * 라즈베리파이 serial 통신 구현 및 AWS SDK 구성
## 프로젝트 소개 및 개발 내용 소개
> ### 간단 소개
> 카카오톡 챗봇을 사용하여 집안의 사물 IOT를 관리할 수 있는 시스템 구성할 수 있다.     
> 챗봇과 IOT관리를 다양한 AWS 서비스를 통해 관리할 수 있다.          
<details>
<summary>구조</summary>
<div markdown="1">

> ![diagram](https://user-images.githubusercontent.com/13642330/144626272-92f1fdc3-9560-4318-9508-6a106e8f0996.png)
> ## 사용기술
> * 카카오톡 I 오픈빌더
> * AWS 서비스
> * 라즈베리파이
> * Node Red
> * 아두이노
    
</div>
</details>

<details>
<summary>카카오톡 챗봇 구현</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144631617-5d1a8bfb-14c9-43bb-824b-e693e9a63632.png)
> ![2](https://user-images.githubusercontent.com/13642330/144631627-27be713f-1fcd-4627-b230-42aca1e4ad69.png)
> ![3](https://user-images.githubusercontent.com/13642330/144631648-8f985c81-c741-45fc-b990-106309c036d0.png)
> ![4](https://user-images.githubusercontent.com/13642330/144631673-22794fd5-8c38-4480-900c-cf665fe8a306.png)

    
</div>
</details>


<details>
<summary>AWS IoT Core 구현</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144632180-f0867e8f-63d3-42f8-88d6-a2e384ed96de.png)
> ![2](https://user-images.githubusercontent.com/13642330/144632190-a85a40ee-6dce-4546-823a-1814444629f0.png)
> ![3](https://user-images.githubusercontent.com/13642330/144632193-cb6ec4a6-b8ac-4ae2-8d95-d57aac2e69ba.png)
> ![4](https://user-images.githubusercontent.com/13642330/144632202-863192aa-7672-42de-bf15-0dfa7dcf8c5c.png)
> ![5](https://user-images.githubusercontent.com/13642330/144632208-96249d74-5536-4a33-b9c5-3fc072157411.png)
> ![6](https://user-images.githubusercontent.com/13642330/144632213-3e24d893-a184-471c-bf66-c88025da3685.png)
> ![7](https://user-images.githubusercontent.com/13642330/144632216-ec5666fd-5774-4e6c-8768-4a05fcc62a36.png)
> ![8](https://user-images.githubusercontent.com/13642330/144632243-3da9efcc-f641-46a2-a2e9-06a82a0c05df.png)
    
</div>
</details>


<details>
<summary>AWS Lambda</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144632428-b17e4e83-aa0d-4cfe-be9b-3bda104fc357.png)
> ![2](https://user-images.githubusercontent.com/13642330/144632435-0d00f7da-78a5-43c8-b33a-77dfb9482276.png)
> ![3](https://user-images.githubusercontent.com/13642330/144632443-9a5e77c1-1972-48e5-9152-f76227ceed21.png)

    
</div>
</details>


<details>
<summary>API Gateway</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144632572-c13d5117-f26a-4d6f-806a-02cb66dc66e5.png)
> ![2](https://user-images.githubusercontent.com/13642330/144632576-0bd44a8f-4c10-42c2-89fd-d6de46fd2934.png)

    
</div>
</details>


<details>
<summary>Node red & Raspberry pi</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144632738-5175e621-824a-49af-ae03-bf837514fdfb.png)
> ![2](https://user-images.githubusercontent.com/13642330/144632740-7c0253ae-4d20-4b11-8321-27d35388de67.png)
    
</div>
</details>


<details>
<summary>Arduino</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144632891-5ff67fe6-d246-45c8-8c7f-98a69972b23b.png)
    
</div>
</details>

## 프로젝트 개발 결과물 소개

<details>
<summary>펼쳐보기</summary>
<div markdown="1">

> ![1](https://user-images.githubusercontent.com/13642330/144633243-a4997352-2952-4390-a28f-1a1bd6995d55.png)
> ![2](https://user-images.githubusercontent.com/13642330/144633248-dd291323-b34f-4c89-bf5e-784db1833703.png)
> ![3](https://user-images.githubusercontent.com/13642330/144633253-175df738-3719-4d1a-ae09-f0c82f5f38bb.png)
> ![4](https://user-images.githubusercontent.com/13642330/144633256-d2c7d580-8ab7-4ce1-a403-dc43eff649da.png)
> ![5](https://user-images.githubusercontent.com/13642330/144633260-4c919043-a2f7-410a-b7a3-c626526032c8.png)
> ![6](https://user-images.githubusercontent.com/13642330/144633269-d07459a4-4d29-4b87-b789-48f02d5ffbe4.png)
> ![7](https://user-images.githubusercontent.com/13642330/144633278-beffa112-27db-439c-8b6d-4a163f27f4c6.png)
> ![8](https://user-images.githubusercontent.com/13642330/144633284-2afd46fd-bfa7-4775-913d-f8280e86a07d.png)

    
</div>
</details>

## 개발 결과물을 사용하는 방법 소개
> 1. 카카오톡 챗봇 추가 (https://pf.kakao.com/_EwuVb)
> 2. [관리] 메뉴를 통해 [room_off] [room_on] [bath_off] [bath_on] 버튼으로 명령
> 3. 전등 스위치 제어 서보가 동작    
> ( 아래 사진을 클릭하여 유튜브로 시청해보세요 )
> [![그림3](https://user-images.githubusercontent.com/13642330/144628157-900b3104-cff2-4e6a-b116-64c235200d2b.png)](https://youtu.be/-rUOR16cnLo)


> ## 개발 결과물의 필요성 및 활용방안     
> 별도의 IoT제어 어플 설치 필요 없이 카카오톡 챗봇을 이용하여 본인의 기기를 원격으로 제어할 수 있습니다.        
> 원격 거리 제한이 없어 언제 어디서든 제어가 가능하여, 스마트홈IoT뿐만 아니라 스마트팜, 보안 관련에서도 사용되기에 적합합니다.

***

Create By 박건형, 황현진, 이화준    
Hallym Univ - Computer science      
2021-12     
***
챗봇 정보 : https://pf.kakao.com/_EwuVb    
챗봇 추가 : http://pf.kakao.com/_EwuVb/chat    
Youtube : https://youtu.be/-rUOR16cnLo     
***
Instructions for use
* Kakao I Openbuilder https://i.kakao.com/
* PPT template https://slidesgo.com/slidesgo-school
* AWS education https://docs.aws.amazon.com/ko_kr/index.html
* https://slidesgo.com/faqs and https://slidesgo.comslidesgo-school

