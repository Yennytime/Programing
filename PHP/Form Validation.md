### * HTML 양식에는 필수 및 선택적 텍스트 필드, 라디오 버튼 및 제출 버튼과 같은 다양한 입력 필드가 포함 <br>
![image](https://user-images.githubusercontent.com/117110034/199274783-7c78fa7a-2d65-4e7a-878d-8b6b48a4ae6a.png) <br>

#### 위 양식에 대한 유효성 검사 규칙

|**필드**|옵션|부가 설명|
|------|---|---|
|name|필수|문자와 공백만 포함|
|E-mail|필수|올바른 전자 메일 주소(@ 및)를 포함|
|Website|선택|유효한 URL이 있는 경우 해당 URL을 포함|
|Comment|선택|다중줄 입력 필드(텍스트 영역)|
|Gender|요청|목록 중 하나를 선택해야 함|

#

#### 1. 텍스트 필드
name, E-mail, Website 필드는 텍스트 **입력 요소**이고, Comment 필드는 **텍스트 영역**이다.
```html
Name : <input type="text" name="name">
E-mail: <input type="text" name="email">
Website: <input type="text" name="website">
Comment: <textarea name="comment" rows="5" cols="40"></textarea>
```

#### 2. 라디오 버튼
Gender 필드는 라디오 버튼이다. <br> <sub>라디오 버튼은 **동그란원 모양이며 선택 가능한 인터페이스**를 가지고 있다. 방문자에게 입력값을 받기 위해서 웹사이트에 많이 사용.</sub>
```html
Gender:
<input type="radio" name="gender" value="female">Female
<input type="readio" name="gender" value="male">Male
<input type="radio" name="gender" value="other">Other
```

#

### 양식 요소
HTML 양식 코드는 아래와 같다.

```html
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>
```

양식이 제출되면, 양식 데이터가 method="post"와 함께 전송된다. <br>
#### $_SERVER["PHP_SELF"] 변수란?
**현재 실행중인 스크립트의 파일 이름을 반환** 하는 슈퍼 전역 변수 <br> 따라서, $_SERVER["PHP_SELF"]는 제출된 양식 데이터를 다른 페이지로 건너뛰는 대신 페이지 자체로 보내진다. <br> <sub> 이렇게 되면, 사용자는 양식과 동일한 페이지에서 오류 메세지를 받게 된다.</sub><br>
#### htmlspecialchars() 함수란?
특수 문자를 HTML entities(정보 단위)로 변환. 이것은 HTML 문자를 <,> &lt; 그리고 &gt;로 대체한다는 의미를 가진다. <br> 이는 공격자가 양식에 HTML 또는 JavaScript 코드 (**Cross-site Scripting attacks**)를 삽입하여 코드를 악용하는 것을 방지한다.

#

### PHP 양식 보안에 대한 참고 사항
$_SERVER["PHP_SELF"] 변수는 공격자가 사용할 수 있다.<br> 페이지에서 PHP_SELF를 사용하는 경우, 사용자는 백슬래시(/)를 입력한 다음 Cross-stie Scripting(XSS) 명령을 실행할 수 있다. <br>
##### Cross-site scripting(XSS)는 일반적으로 웹 응용 프로그램에서 발견되는 일종의 컴퓨터 보안 취약점이다. <br> XSS를 사용하면, 공격자가 다른 사용자가 보는 웹 페이지에 클라이언트측 스크립트를 사입 가능. <br>
#### 예시
"test_from.php"라는 페이지에 다음 형식이 있다고 가정하자. 
```html
<form method="post" action="<?php echo $_SERVER["PHP_SELF"]; ?>">
```
사용자는 주소 표시줄에 ```"http://www.yenny.com/test_from.php"``` 와 같은 일반 URL을 입력하면 위 코드가 다음과 같이 번역된다. 
```html
<form method="post" action="test_form.php">
```
그러나, 사용자가 주소 표시줄에 아래와 같은 URL을 입력한다고 가정해보자. <br>
```
http://www.example.com/test_form.php/%22%3E%3Cscript%3Ealert('hacked')%3C/script%3E <br>
```

이 경우, 위의 코드는 다음과 같이 번역된다.
```html
<form method="post" action="test_form.php/"><script>alret('hacked')</script>
```
이 코드는 스크립트 태그와 경고 명령을 추가한다. 페이지가 로드되면, JavaScript 코드가 실행 (사용자에게 경고 상자가 표시) 되므로, 이것은 PHP_SELF 변수가 어떻게 악용될 수 있는지에 대해 알 수 있다. <br>

##### <script> 태그 안에 모든 JavaScript 코드를 추가할 수 있다. <br> 공격자는 사용자를 다른 서버의 파일로 리디렉션할 수 있으며, 해당 파일에는 전역 변수를 변경하거나, 사용자 데이터를 저장하기 위해 양식을 다른 주소로 제출할 수 있는 악성 코드가 포함 된다.
  
#
  
### $_SERVER["PHP_SELF"] 악용을 피하는 방법
htmlspecialchars() 함수를 사용하여 피할 수 있다. 
  
#### 양식 코드
```html
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
```
  
htmlspecialchars() 함수는 특수문자를 HTML entities로 변환하기 때문에, 공격자가 PHP_SELF 변수를 악용하려고 하면, 아래와 같은 결과가 출력된다.
```html
<form method="post" action="test_form.php/&quot;&gt;&lt;script&gt;alert('hacked')&lt;/script&gt;">
``` 
이렇게 되면, 악용 시도가 실패되고, 아무런 피해가 없다.
      
#

### PHP로 양식 데이터 유효성 검사
일단, PHP의 htmlspecialchars() 함수를 통해 **모든 변수를 전달** 해야 한다. <br> htmlspecialchars() 함수를 사용할 때, 사용자가 텍스트 필등 다음을 제출하려고 한다면: <br>
```
<script>location.href('http://www.hacked.com')</script>
```

아래와 같이 HTML escapde 코드로 저장되므로 실행 되지 않는다. <br>
```
&lt;script&gt;location.href('http://www.hacked.com')&lt;/script&gt;
```

이제 코드를 페이지나 이메일에 안전하게 표시할 수 있지만, 사용자가 약식을 제출할 때 두 가지 작업이 필요하다. <br>
1. 사용자가 입력 데이터에 불필요한 문자 (공백, 탭, 줄 바꿈) 입력 제거 - PHP trim() 함수 사용 <br>
2. 사용자가 입력 데이터에 백슬래시 (\) 입력 제거 - PHP stripslashes() 함수 사용 <br>
  
#### trim() 함수와 stripslashes() 함수를 사용한 스크립트 예시
```php
<?php 
// 변수를 정의하고 빈 값으로 설정
$name = $email = $gender = $comment = $website = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
// $_SERVER["REQUEST_METHOD"]를 사용하여 양식이 제출 되었는지 확인
// REQUEST_METHOD가 POST이면, 양식이 제출된 것이며, 유효성 검사가 필요. 제출하지 않는 경우, 검사를 건너뛰고 빈 양식을 표시.
  $name = test_input($_POST["name"]);
  $email = test_input($_POST["email"]);
  $website = test_input($POST["website"]);
  $comment = test_input($POST["comment"]);
  $gender = test_input($POST["gender"]);
}

function test_input($data) {
  $data = trim($data); // 불필요한 문자 제거
  $data = stripslashes($data); // 백슬래시 제거
  $data = htmlspeicalchars($data); // 특수 문자를 HTML entities(정보 단위)로 변환 (XSS 방지)
  return $data;
}
?>
```
  
                                                                           
                                                                          
