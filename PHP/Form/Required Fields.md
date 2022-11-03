## 이전 페이지의 유효성 검사 규칙 테이블 참고*<br>
![image](https://user-images.githubusercontent.com/117110034/199580586-1b4b5f1e-7870-4212-89ec-5a1fa8b50b22.png)
<br>
|**필드**|옵션|부가 설명|
|------|---|---|
|name|필수|문자와 공백만 포함|
|E-mail|필수|올바른 전자 메일 주소(@ 및)를 포함|
|Website|선택|유효한 URL이 있는 경우 해당 URL을 포함|
|Comment|선택|다중줄 입력 필드(텍스트 영역)|
|Gender|필수|목록 중 하나를 선택해야 함|
<br>
유효성 검사 규칙 테이블에서 "name", "E-mail", "Gender" 필드가 필수 임을 알 수 있다.<br>이 필드는 비워둘 수 없으며 `HTML양식`으로 채워야 한다.<br>

#

#### $nameErr, $emailErr, genderErr, $websiteErr과 같은 몇가지 새로운 변수를 추가하여 필수 필드에 대한 오류 메세지를 보유한다.<br>
`if else`를 $_POST 변수에 추가하여, `empty()` 함수를 통해 **$_POST 변수가 비어있는지 확인**한다.<br><br>비어있으면, 오류 메세지가 다른 오류 변수에 저장되고, 비어있지 않으면 `test_input()`함수를 통해 사용자 입력 데이터를 보낸다.<br><br>
```php
<?php 
// 변수를 정의하고 빈 값으로 설정
$nameErr = $emailErr = $genderErr = $websiteErr = ""; // website같은 경우, 유요한 URL이 필요하기 때문
$name = $email = $gender = $comment = $website = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) { // name이 비어있으면
    $nameErr = "Name is required";
  } else { // 비어있지 않으면
    $name = test_input($_POST["name"]);
  }
  
  if (empty($_POST["email"])) {
    $emailErr = "Email is required";
  } else {
    $email = test_input($_POST["email"]);
  }
  
  if (empty($_POST["website"])) {
    $website = ""; // 빈 칸 출력
  } else {
    $website = test_input($_POST["website"]);
  }
  
  if (empty($_POST["comment"])) {
    $comment = "";
  } else {
    $comment = test_input($_POST["comment"]);  
  }
  
  if (empty($_POST["gender"])) {
    $genderErr = "Gender is required";
  } else {
    $gender = test_input($_POST["gender"]);
  }
}

?>
```

#

### 오류 메세지 표시<br>
HTML 양식에서 각 필수 필드 뒤에 `작은 스크립트`를 추가하여 사용자가 필수 필드를 채우지 않고 양식을 제출하는 경우, `올바른 오류 메세지를 생성`한다.<br> 아래의 양식을 확인해보자.
```php
<!DOCTYPE HTML>
<html>
<head>
<style>
.error {color: #FF0000;} // 에러 메세지를 빨간색으로 설정
 </style>
 </head>
 <body>
 
 <?php
 // 변수를 정의하고 빈 값으로 설정
$nameErr = $emailErr = $genderErr = $websiteErr = ""; // website같은 경우, 유요한 URL이 필요하기 때문
$name = $email = $gender = $comment = $website = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) { // name이 비어있으면
    $nameErr = "Name is required";
  } else { // 비어있지 않으면
    $name = test_input($_POST["name"]);
  }
  
  if (empty($_POST["email"])) {
    $emailErr = "Email is required";
  } else {
    $email = test_input($_POST["email"]);
  }
  
  if (empty($_POST["website"])) {
    $website = ""; // 빈 칸 출력
  } else {
    $website = test_input($_POST["website"]);
  }
  
  if (empty($_POST["comment"])) {
    $comment = "";
  } else {
    $comment = test_input($_POST["comment"]);  
  }
  
  if (empty($_POST["gender"])) {
    $genderErr = "Gender is required";
  } else {
    $gender = test_input($_POST["gender"]);
  }
}

function test_input($data) {
  $data = trim($data); // 불필요한 문자 (여분의 공백, 탭, 줄바꿈 등) 방지
  $data = stripslashes($data); // 백슬러시 방지
  $data = htmlspecialchars($data); // 특수 문자를 HTML entities로  
  return $data;
}
?>

<h2>PHP Form Validation Example</h2>
<p><span class="error">* required field</span></p> 
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  Name: <input type="text" name="name">
  <span class="error">* <?php echo $nameErr;?></span> // 이름이 비어있을 경우, $nameErr 호출 
  <br><br>
  E-mail: <input type="text" name="email">
  <span class="error">* <?php echo $emailErr;?></span>
  <br><br>
  Comment : <textarea name="comment" rows="5" cols="40"></textarea>
  <br><br>
  Gender:
  <input type="radio" name="gender" value="female">Female
  <input type="radio" name="gender" value="male">Male
  <input type="radio" name="gender" value="other">Other
  <span calss=error>* <?php echo $genderErr;?></spn>
  <br><br>
  <input type="submit" name="submit" value="submit">
</form>

<?php
echo "<h2>Your Input:</h2>";
echo $name;
echo <br>;
echo $email;
echo <br>;
echo $website;
echo <br>;
echo $comment;
echo <br>;
echo $gender;
?>

</body>
<html>
```
  
 
