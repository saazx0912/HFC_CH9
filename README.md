# HFC_CH9
HFC CH9 

1. system()函式可以調用系統命令， 包含在 stdlib.h
   ex: system("ls -a");

2. exec() 包含在 unistd.h，函數用於在目前的 process 中啟動一個新的程式，取代目前 process 的執行。
   也就是成功執行後，原來的程式碼將不再執行，因為目前 process 已被新程式取代。
   exec()函式名後會接一到兩個字母，但只能是l ,v , p 和 e，他們分別代表你想使用的功能
   l: 參數列表
   v: 參數陣列（向量）
   p: 在PATH路徑找尋
   e: 環境變數
   l , v，總是在p,e前出現，p,e是optional
   EX: execle = exec + l + e  = 參數列表和環境變數

3. 每一個 process 都有一組環境變數，c語言可以用getenv()讀取環境變數
   getenv()包含在 stdlib.h

4. 當系統exec()調用發生錯誤時，會將errno變數設為錯誤代碼
    puts(strerror(errno)); strerror()將錯誤碼轉換為描述訊息


5.fork()會clone 當下process ,新建立的副本將從同一行開始運行相同程序
  原process叫 parent process ，新建立的副本叫 child process
  forf會回傳一個整數 , 0代表為 child process  , >0 代表為 parent process  ， -1代表調用失敗