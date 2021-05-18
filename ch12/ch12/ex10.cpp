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

void printMessage(const Message& m) {
    cout << "보낸 시간 : " << m.GetSendTime() << endl;
    cout << "보낸 사람 : " << m.GetSendName() << endl;
    cout << "  내 용   : " << m.GetContent() << endl;
    cout << endl;
}

int main() {
    Image* dogImage = new Image;
    Message* messages[] = {
        new TextMessage(10, "두들", "안녕"),
        new ImageMessage(20, "두들", dogImage),
        new TextMessage(30, "두들", "잘가")
    };

    // 범위 기반 for문
    for (Message* m : messages) {
        printMessage(*m);
    }

    // 배열의 각 칸마다 동적 할당된 객체를 가리키고 있으므로 각각 해제한다.
    for (Message* m : messages) {
        delete m;
    }
    delete dogImage;
}
