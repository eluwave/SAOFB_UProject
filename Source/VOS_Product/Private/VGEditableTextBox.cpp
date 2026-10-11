#include "VGEditableTextBox.h"

UVGEditableTextBox::UVGEditableTextBox() {
    this->LettersToMax = -1;
    this->RegexString = TEXT("[\\u0000-\\u0008,\\u000A-\\uD7FF,\\uE000-\\uFFFF]");
}

void UVGEditableTextBox::CommitText() {
}

