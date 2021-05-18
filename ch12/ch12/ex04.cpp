#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    operator string() {
        return "����";
    }
};

class TextMessage {
public:
    TextMessage(int sendTime, string sendName, string text) {
        this->sendTime = sendTime;
        this->sendName = sendName;
        this->text = text;
    }

    int GetSendTime() const { return sendTime; }
    string GetSendName() const { return sendName; }
    string GetText() const { return text; }

private:
    int sendTime;
    string sendName;
    string text;
};

class ImageMessage {
public:
    ImageMessage(int sendTime, string sendName, Image* image) {
        this->sendTime = sendTime;
        this->sendName = sendName;
        this->image = image;
    }

    int GetSendTime() const { return sendTime; }
    string GetSendName() const { return sendName; }
    Image* GetImage() const { return image; }

private:
    int sendTime;
    string sendName;
    Image* image;
};


int main() {
    Image* dogImage = new Image;  // Image ��ü�� �̸� ����� �д�.
    TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
    // ����� �� ��ü�� �����͸� �������� �μ��� ���� �ִ´�.
    ImageMessage* dog = new ImageMessage(20, "�ε�", dogImage);

    cout << "���� �ð� : " << hello->GetSendTime() << endl;
    cout << "���� ��� : " << hello->GetSendName() << endl;
    cout << "  �� ��   : " << hello->GetText() << endl;
    cout << endl;

    cout << "���� �ð� : " << dog->GetSendTime() << endl;
    cout << "���� ��� : " << dog->GetSendName() << endl;
    cout << "  �� ��   : " << (string)*dog->GetImage() << endl;
    cout << endl;

    delete dogImage;
    delete hello;
    delete dog;
}