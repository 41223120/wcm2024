<!-- 導入 Brython 程式庫 -->
<script src="./../cmsimde/static/brython.js"></script>
<script src="./../cmsimde/static/brython_stdlib.js"></script>
<!-- 啟動 Brython -->
<script>
window.onload=function(){
brython();
}
</script>
<h1>累加結果：</h1>
<!-- 顯示結果標註 -->
<ul id="result"></ul>

<!-- 在 <script type="text/python"> 標籤中編寫 Python 代碼 -->
<script type="text/python">
from browser import document
result_list = document.getElementById("result")
# sum 初始值設為 0
sum = 0
init = 1
upto = 10
# 利用 for 重複迴圈與變數加法進行累加
for i in range(init, upto+1):
sum = sum + i
# skip the first one
if i !=1:
result_list.innerHTML += "<li>{} + {} = {}</li>".format(sum-i, i, sum)
</script>
  