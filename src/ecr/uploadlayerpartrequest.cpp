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

#include "uploadlayerpartrequest.h"
#include "uploadlayerpartrequest_p.h"
#include "uploadlayerpartresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/**
 * @class  UploadLayerPartRequest
 *
 * @brief  Implements ECR UploadLayerPart requests.
 *
 * @see    ECRClient::uploadLayerPart
 */

/**
 * @brief  Constructs a new UploadLayerPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadLayerPartRequest::UploadLayerPartRequest(const UploadLayerPartRequest &other)
    : ECRRequest(new UploadLayerPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadLayerPartRequest object.
 */
UploadLayerPartRequest::UploadLayerPartRequest()
    : ECRRequest(new UploadLayerPartRequestPrivate(ECRRequest::UploadLayerPartAction, this))
{

}

bool UploadLayerPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadLayerPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadLayerPartResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadLayerPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadLayerPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadLayerPartRequestPrivate
 *
 * @brief  Private implementation for UploadLayerPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadLayerPartRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public UploadLayerPartRequest instance.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const ECRRequest::Action action, UploadLayerPartRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadLayerPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadLayerPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadLayerPartRequest instance.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const UploadLayerPartRequestPrivate &other, UploadLayerPartRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
