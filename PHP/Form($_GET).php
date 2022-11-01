// GET은 양식을 처리하는 URL에 양식을 추가
/* http://localhost/form.php가 양식 처리하는 URL이라고 가정하고,
yenny@mewmew.com 이메일을 입력 후 양식을 제춣하면, 다음과 같이 이메일 값이 URL에 추가되는 것을 볼 수 있다.

http://localhost/form.php?email=yenny%40mewmew.com

여기서, @는 URL에서 %40으로 인코딩 된다.

양식에 여러 입력 요소가 있는 경우, 웹 브라우저는 다음 형식의 양식 입력으로 URL에 추가함.

http://localhost/form.php?name1=value&name2=value2&name3=value3 */

// HTTP GET 양식 1

<form action="form.php" method="get">
  <div>
    <lable for"email">Email:</lable>
    <input type="email" id="email" name="email" />
  </div>
  <button type="submit">Sumbit"</button>
</form>

// from.php 파일

<?php
// isset() 함수를 사용해서 양식 데이터에 이메일이 포함되어있는지 확인
if (isset($_GET['email'])) {
  var_dump($_GET['email']);
}
?>

// HTTP GET 양식 2

<form action="Welcome_get.php" method="get">
  Name: <input type="text" name="name"><br>
  Email: <input type="text" name="email"><br>
  <input type="submit">
</form>

// Welcome_get.php 파일

Welcome <?php echo $_GET["name"]; ?><br>
Your email address is: <?php echo $_GET["email"]; ?>


