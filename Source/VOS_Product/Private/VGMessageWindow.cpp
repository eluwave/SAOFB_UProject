#include "VGMessageWindow.h"

UVGMessageWindow::UVGMessageWindow() {
    this->m_message_wait = 0.10f;
    this->RemoveWhenClosed = false;
    this->m_tb_caption = NULL;
    this->m_tb_body = NULL;
}

void UVGMessageWindow::SetText(FText Body) {
}

void UVGMessageWindow::SetCaption(FText Caption) {
}

void UVGMessageWindow::SetAutoCloseTime(float Time) {
}

void UVGMessageWindow::Open(bool isInteractive) {
}

void UVGMessageWindow::OnUpdateMessage_Implementation() {
}

void UVGMessageWindow::OnReachMessage_Implementation() {
}

bool UVGMessageWindow::IsOpened() const {
    return false;
}

void UVGMessageWindow::Close() {
}

