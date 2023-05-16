/*
 * libserver.h
 *
 *  Created on: 2016/06/13
 *      Author: yasuh
 */

#ifndef LIBSERVER_H_
#define LIBSERVER_H_

#include <stdbool.h>
#include <event.h>
#include <event2/event.h>
#include <evutil.h>

/**
 * @brief TCP�T�[�o�\�P�b�g�𐶐�����
 * @param port_num �҂��󂯃|�[�g�ԍ�
 * @return ���������\�P�b�g
 */
int serverTCPSocket(const char* port_num);

/**
 * @brief �T�[�o�\�P�b�g�̃C�x���g�n���h��
 * @param sock �T�[�o�\�P�b�g
 * @param event �C�x���g
 * @param arg ����
 */
void acceptHandler(evutil_socket_t sock, short event, void* arg);

/**
 * @brief �A�N�Z�v�g���̃C�x���g�n���h���F�N���C�A���g�̓��͂ɑ΂��ăG�R�[�o�b�N���s��
 * @param acc �\�P�b�g
 * @param event �C�x���g
 * @param arg ����
 */
void echobackHandler(evutil_socket_t acc, short event, void* arg);

#endif /* LIBSERVER_H_ */
