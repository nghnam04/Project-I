# Thuật toán Mã hóa và Giải mã sử dụng phép XOR và Key

## Giới thiệu
Dự án này thực hiện việc mã hóa và giải mã văn bản sử dụng phương pháp XOR và một khóa mã hóa. Mỗi ký tự trong văn bản được mã hóa bằng cách XOR với một khóa tính toán dựa trên giá trị của ký tự và một giá trị `k` được cung cấp. Các ký tự XOR kết quả sẽ được điều chỉnh để đảm bảo chúng nằm trong phạm vi ký tự ASCII có thể hiển thị.

## Các tính năng chính
- **Mã hóa**: Chuyển đổi văn bản đầu vào thành chuỗi mã hóa bằng cách sử dụng phép toán XOR và khóa tính toán từ giá trị của ký tự cộng với một số nguyên `k`.
- **Giải mã**: Chuyển đổi chuỗi mã hóa trở lại văn bản ban đầu bằng cách sử dụng cùng khóa và phép toán XOR ngược lại.
- **Xử lý ký tự đặc biệt**: Các ký tự XOR có thể nằm ngoài phạm vi ký tự ASCII in được (32-126), do đó được chuyển đổi thành các ký tự đặc biệt hoặc mã hóa thành các chuỗi có thể đọc được.

## Cách sử dụng
### 1. **Nhập văn bản gốc và khóa**
Chạy chương trình và nhập văn bản gốc bạn muốn mã hóa. Sau đó nhập một số nguyên `k` làm khóa. 

### 2. **Mã hóa và giải mã**
Sau khi bạn nhập thông tin, chương trình sẽ mã hóa văn bản và in ra chuỗi mã hóa. Sau đó, chương trình sẽ giải mã chuỗi mã hóa và in ra văn bản ban đầu nếu giải mã thành công.

### 3. **Đầu ra**
Chương trình sẽ in ra cả chuỗi mã hóa và kết quả giải mã. 

## Ngôn ngữ
Chương trình được lập trình bằng ngôn ngữ ***C++***

## Cách hoạt động
- **Mã hóa**:
    - Mỗi ký tự trong văn bản được tính toán một "key" (khóa) bằng cách cộng giá trị ASCII của ký tự với một số nguyên `k`, sau đó lấy kết quả modulo 256.
    - Kết quả của phép toán XOR giữa ký tự và key sẽ được chuyển thành chuỗi mã hóa có thể in được, nếu cần thiết sẽ chuyển thành các ký tự đặc biệt.

- **Giải mã**:
    - Quy trình giải mã là ngược lại với mã hóa. Chuỗi mã hóa được chuyển lại thành ký tự XOR ban đầu, sau đó sử dụng khóa đã lưu để giải mã và phục hồi văn bản ban đầu.

## Cài đặt

### 1. Clone repository về máy của bạn:
Mở terminal (hoặc Git Bash) và nhập lệnh sau:
```markdown
```bash git clone https://github.com/nghnam04/Project-I.git```
```
### 2.Biên dịch và chạy chương trình:
Sau khi clone xong, bạn cần biên dịch mã nguồn để tạo tệp thực thi. Sử dụng trình biên dịch C++ như g++ để biên dịch chương trình. Trong terminal, di chuyển đến thư mục chứa mã nguồn và chạy lệnh sau: ```g++ -o project1 project1.cpp```
### 3.Chạy chương trình:
Sau khi biên dịch thành công, bạn có thể chạy chương trình với lệnh sau: ```./project1```


## Yêu cầu
Trình biên dịch C++ (ví dụ: GCC, Clang, hoặc MSVC)
Kiến thức cơ bản về các phép toán XOR và xử lý chuỗi trong C++

## Tài liệu tham khảo
Phương pháp mã hóa XOR.
ASCII Table: [](https://www.asciitable.com)

Mọi đóng góp và thắc mắc xin liên hệ:
- _Email: nam.nh225213@sis.hust.edu.vn_
- _Điện thoại: 0904262833_


