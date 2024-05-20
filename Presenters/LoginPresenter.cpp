#include "LoginPresenter.h";

InventoryManagerApp::Presenters::LoginPresenter::LoginPresenter(IConnectionView^ view) {
	this->view = view;
}

void InventoryManagerApp::Presenters::LoginPresenter::Login() {
	this->view->Email;
}