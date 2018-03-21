/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cancelcertificatetransferrequest.h"
#include "cancelcertificatetransferrequest_p.h"
#include "cancelcertificatetransferresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  CancelCertificateTransferRequest
 *
 * @brief  Implements IoT CancelCertificateTransfer requests.
 *
 * @see    IoTClient::cancelCertificateTransfer
 */

/**
 * @brief  Constructs a new CancelCertificateTransferRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelCertificateTransferRequest::CancelCertificateTransferRequest(const CancelCertificateTransferRequest &other)
    : IoTRequest(new CancelCertificateTransferRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelCertificateTransferRequest object.
 */
CancelCertificateTransferRequest::CancelCertificateTransferRequest()
    : IoTRequest(new CancelCertificateTransferRequestPrivate(IoTRequest::CancelCertificateTransferAction, this))
{

}

bool CancelCertificateTransferRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelCertificateTransferResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelCertificateTransferResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CancelCertificateTransferRequest::response(QNetworkReply * const reply) const
{
    return new CancelCertificateTransferResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelCertificateTransferRequestPrivate
 *
 * @brief  Private implementation for CancelCertificateTransferRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelCertificateTransferRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CancelCertificateTransferRequest instance.
 */
CancelCertificateTransferRequestPrivate::CancelCertificateTransferRequestPrivate(
    const IoTRequest::Action action, CancelCertificateTransferRequest * const q)
    : CancelCertificateTransferPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelCertificateTransferRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelCertificateTransferRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelCertificateTransferRequest instance.
 */
CancelCertificateTransferRequestPrivate::CancelCertificateTransferRequestPrivate(
    const CancelCertificateTransferRequestPrivate &other, CancelCertificateTransferRequest * const q)
    : CancelCertificateTransferPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
