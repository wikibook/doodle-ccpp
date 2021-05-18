#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    operator string() {
        return "사진";
    }
};

class Message {
public:
    Message(int sendTime, string sendName) {
        this->sendTime = sendTime;
        this->sendName = sendName;
    }

    int GetSendTime() const { return sendTime; }
    string GetSendName() const { return sendName; }

private:  // 자식 클래스에서는 이 변수들에 접근할 일이 없다.
    int sendTime;
    string sendName;
};

class TextMessage : public Message {
public:
    TextMessage(int sendTime, string sendName, string text)
        : Message(sendTime, sendName) {  // 부모 클래스 생성자 호출
        this->text = text;
    }

    string GetText() const { return text; }

private:
    string text;
};

class ImageMessage : public Message {
public:
    ImageMessage(int sendTime, string sendName, Image* image)
        : Message(sendTime, sendName) {  // 부모 클래스 생성자 호출
        this->image = image;
    }

    Image* GetImage() const { return image; }

private:
    Image* image;
};

int main() {
    Image* dogImage = new Image;
    TextMessage* hello = new TextMessage(10, "두들", "안녕");
    ImageMessage* dog = new ImageMessage(20, "두들", dogImage);

    cout << "보낸 시간 : " << hello->GetSendTime() << endl;
    cout << "보낸 사람 : " << hello->GetSendName() << endl;
    cout << "  내 용   : " << hello->GetText() << endl;
    cout << endl;

    cout << "보낸 시간 : " << dog->GetSendTime() << endl;
    cout << "보낸 사람 : " << dog->GetSendName() << endl;
    cout << "  내 용   : " << (string)*dog->GetImage() << endl;
    cout << endl;

    delete dogImage;
    delete hello;
    delete dog;
}
