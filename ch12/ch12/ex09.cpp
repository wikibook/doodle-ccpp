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
    virtual ~Message() {}  // 가상 소멸자

    int GetSendTime() const { return sendTime; }
    string GetSendName() const { return sendName; }
    virtual string GetContent() const { return ""; }

private:
    int sendTime;
    string sendName;
};

class TextMessage : public Message {
public:
    TextMessage(int sendTime, string sendName, string text)
        : Message(sendTime, sendName) {
        this->text = text;
    }

    string GetContent() const { return text; }  // 오버라이딩

private:
    string text;
};

class ImageMessage : public Message {
public:
    ImageMessage(int sendTime, string sendName, Image* image)
        : Message(sendTime, sendName) {
        this->image = image;
    }

    string GetContent() const { return (string)*image; }  // 오버라이딩

private:
    Image* image;
};

void printMessage(Message* m) {
    cout << "보낸 시간 : " << m->GetSendTime() << endl;
    cout << "보낸 사람 : " << m->GetSendName() << endl;
    cout << "  내 용   : " << m->GetContent() << endl;  // 가상 함수이므로 동적 바인딩이 일어난다.
    cout << endl;
}

int main() {
    Image* dogImage = new Image;
    TextMessage* hello = new TextMessage(10, "두들", "안녕");
    ImageMessage* dog = new ImageMessage(20, "두들", dogImage);

    printMessage(hello);
    printMessage(dog);

    delete dogImage;
    delete hello;
    delete dog;
}
