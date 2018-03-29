/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesigningcertificaterequest.h"
#include "updatesigningcertificaterequest_p.h"
#include "updatesigningcertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateSigningCertificateRequest
 *
 * @brief  Implements IAM UpdateSigningCertificate requests.
 *
 * @see    IAMClient::updateSigningCertificate
 */

/**
 * @brief  Constructs a new UpdateSigningCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSigningCertificateRequest::UpdateSigningCertificateRequest(const UpdateSigningCertificateRequest &other)
    : IAMRequest(new UpdateSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSigningCertificateRequest object.
 */
UpdateSigningCertificateRequest::UpdateSigningCertificateRequest()
    : IAMRequest(new UpdateSigningCertificateRequestPrivate(IAMRequest::UpdateSigningCertificateAction, this))
{

}

bool UpdateSigningCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSigningCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSigningCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSigningCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSigningCertificateRequestPrivate
 *
 * @brief  Private implementation for UpdateSigningCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSigningCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateSigningCertificateRequest instance.
 */
UpdateSigningCertificateRequestPrivate::UpdateSigningCertificateRequestPrivate(
    const IAMRequest::Action action, UpdateSigningCertificateRequest * const q)
    : UpdateSigningCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSigningCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSigningCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSigningCertificateRequest instance.
 */
UpdateSigningCertificateRequestPrivate::UpdateSigningCertificateRequestPrivate(
    const UpdateSigningCertificateRequestPrivate &other, UpdateSigningCertificateRequest * const q)
    : UpdateSigningCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
