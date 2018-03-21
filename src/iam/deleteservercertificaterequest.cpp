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

#include "deleteservercertificaterequest.h"
#include "deleteservercertificaterequest_p.h"
#include "deleteservercertificateresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteServerCertificateRequest
 *
 * @brief  Implements IAM DeleteServerCertificate requests.
 *
 * @see    IAMClient::deleteServerCertificate
 */

/**
 * @brief  Constructs a new DeleteServerCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerCertificateResponse::DeleteServerCertificateResponse(

/**
 * @brief  Constructs a new DeleteServerCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServerCertificateRequest::DeleteServerCertificateRequest(const DeleteServerCertificateRequest &other)
    : IAMRequest(new DeleteServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServerCertificateRequest object.
 */
DeleteServerCertificateRequest::DeleteServerCertificateRequest()
    : IAMRequest(new DeleteServerCertificateRequestPrivate(IAMRequest::DeleteServerCertificateAction, this))
{

}

bool DeleteServerCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServerCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServerCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServerCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteServerCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteServerCertificateRequest instance.
 */
DeleteServerCertificateRequestPrivate::DeleteServerCertificateRequestPrivate(
    const IAMRequest::Action action, DeleteServerCertificateRequest * const q)
    : DeleteServerCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServerCertificateRequest instance.
 */
DeleteServerCertificateRequestPrivate::DeleteServerCertificateRequestPrivate(
    const DeleteServerCertificateRequestPrivate &other, DeleteServerCertificateRequest * const q)
    : DeleteServerCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
