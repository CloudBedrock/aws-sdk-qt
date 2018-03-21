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

#include "rejectcertificatetransferrequest.h"
#include "rejectcertificatetransferrequest_p.h"
#include "rejectcertificatetransferresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  RejectCertificateTransferRequest
 *
 * @brief  Implements IoT RejectCertificateTransfer requests.
 *
 * @see    IoTClient::rejectCertificateTransfer
 */

/**
 * @brief  Constructs a new RejectCertificateTransferResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectCertificateTransferResponse::RejectCertificateTransferResponse(

/**
 * @brief  Constructs a new RejectCertificateTransferRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectCertificateTransferRequest::RejectCertificateTransferRequest(const RejectCertificateTransferRequest &other)
    : IoTRequest(new RejectCertificateTransferRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectCertificateTransferRequest object.
 */
RejectCertificateTransferRequest::RejectCertificateTransferRequest()
    : IoTRequest(new RejectCertificateTransferRequestPrivate(IoTRequest::RejectCertificateTransferAction, this))
{

}

bool RejectCertificateTransferRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectCertificateTransferResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectCertificateTransferResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * RejectCertificateTransferRequest::response(QNetworkReply * const reply) const
{
    return new RejectCertificateTransferResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectCertificateTransferRequestPrivate
 *
 * @brief  Private implementation for RejectCertificateTransferRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectCertificateTransferRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public RejectCertificateTransferRequest instance.
 */
RejectCertificateTransferRequestPrivate::RejectCertificateTransferRequestPrivate(
    const IoTRequest::Action action, RejectCertificateTransferRequest * const q)
    : RejectCertificateTransferPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RejectCertificateTransferRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectCertificateTransferRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectCertificateTransferRequest instance.
 */
RejectCertificateTransferRequestPrivate::RejectCertificateTransferRequestPrivate(
    const RejectCertificateTransferRequestPrivate &other, RejectCertificateTransferRequest * const q)
    : RejectCertificateTransferPrivate(other, q)
{

}
