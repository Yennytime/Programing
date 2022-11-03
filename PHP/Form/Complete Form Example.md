# Keep the values in the form<br>

사용자가 submit 버튼을 누른 후 입력 필드 값을 표시하기 위해 name, email, webite의 value 속성 내부에 약간의 PHP 스크립트를 추가하자.<br> comment 텍스트 영역 필드에선 `<textarea>`와 `</textarea>` 태그 사이에 스크립트를 넣는다.<br>
value 안에 있는 이 스크립트는 $name, $email, $website, $comment 변수의 값에 출력하게 된다.<br>
그런 다음, 어떤 라디오 버튼이 선택되어있는지 표시해야 한다.<br> 이를 위해 우리는 `checked`속성 (리더오 버튼의 value 속성이 아님)을 조작해야 한다.<br>

```php
Name: <input type="text" name="name" value="<?php echo $name;?>">

Email: <input type="text" name="email" value="<?php echo $email;?>">

Website: <input type="text" name="website" value="<?php echo $website;?>">

Comment: <textarea type="comment" rows="5" cols="40"><?php echo $comment;?></textarea>

Gender:
// isset 함수는 변수가 존재하면 true, 그렇지 않으면 flase를 반환
<input type="radio" name="gender" <?php if (isset($gender) && $gender=="female") echo "checked";?> value="female">Female
<input type="radio" name="gender" <?php if (isset($gender) && $gender=="male") echo "checked";?> value="male">Male
<input type="radio" name="other" <?php if (isset($genser) && $gender=="other") echo "checked";?> value="other">Other
<br><br>
<input type="submit" name="submit" value="Submit">
```
