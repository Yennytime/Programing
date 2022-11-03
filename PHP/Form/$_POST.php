// HTML 양식이 작동하는 방식 과 php에서 양식 데이터 처리하는 방법
// PHP 양식 처리 

<form action="form.php" method="post">
</form>

/* <form> 속성
  action : 양식 제출을 처리하는 URL을 지정. 여기선, "form.php" 양식을 처리
  method : 양식을 제출하기 위한 HTTP 메소드를 지정. 양식 방법은 POST, GET이 일반적으로 사용된다.
  양식 메소드는 대소문자를 구분하지 않음. method 속성을 지정하지 않으면, 양식요소는 get으로 사용됨
  텍스트, 암호, 체크박스, 라디오 버튼, 선택, 파일 업로드 등 일반적인 양식을 포함한 하나 이상의 입력 요소가 있음 = 양식 필드 */

// HTTP POST 방식 
// 양식을 제출한 후, PHP의 연관 배열을 통해 양식 데이터 $_POST 에 액세스 가능 
  
  <from action="from.php" method="post">
    <div>
      <lable for ="email">Email:</lable>
      <input type="email" id="email" name="email" />
    </div>
    <button type="submit">Submit</button>
    </form>
  
  // 양식 데이터에 이메일이 포함되어 있는지 확인하려면 isset()을 사용
  <?php
  if (isset($_POST['email'])) {
    var_dump($_POST['email']);
  }
  ?>
  
// HTTP POST 방식 2
  
  <form action="Welcome_post.php" method="post">
    Name: <input type="text" name="name"><br>
    E-mail: <input type="text" name="email"><br>
    <input type="submit">
    // 사용자가 양식을 작성하고 submmit 버튼을 클릭하면 양식 데이터가 처리를 위해 "Welcome_post.php"라는 PHP 파일로 전송
    // 양식 데이터는 HTTP POST 방식으로 전송 됨
  </form>
  
// 제출된 데이터를 표시하려면 모든 변수를 에코할 수 있다. 
  Welcome <?php echo $_POST["name"]; ?><br>
  Your email address is: <?php echo $_POST["email"]; ?>
