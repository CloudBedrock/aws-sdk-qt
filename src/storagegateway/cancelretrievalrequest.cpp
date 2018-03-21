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

#include "cancelretrievalrequest.h"
#include "cancelretrievalrequest_p.h"
#include "cancelretrievalresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  CancelRetrievalRequest
 *
 * @brief  Implements StorageGateway CancelRetrieval requests.
 *
 * @see    StorageGatewayClient::cancelRetrieval
 */

/**
 * @brief  Constructs a new CancelRetrievalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelRetrievalResponse::CancelRetrievalResponse(

/**
 * @brief  Constructs a new CancelRetrievalRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelRetrievalRequest::CancelRetrievalRequest(const CancelRetrievalRequest &other)
    : StorageGatewayRequest(new CancelRetrievalRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelRetrievalRequest object.
 */
CancelRetrievalRequest::CancelRetrievalRequest()
    : StorageGatewayRequest(new CancelRetrievalRequestPrivate(StorageGatewayRequest::CancelRetrievalAction, this))
{

}

bool CancelRetrievalRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelRetrievalResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelRetrievalResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * CancelRetrievalRequest::response(QNetworkReply * const reply) const
{
    return new CancelRetrievalResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelRetrievalRequestPrivate
 *
 * @brief  Private implementation for CancelRetrievalRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelRetrievalRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CancelRetrievalRequest instance.
 */
CancelRetrievalRequestPrivate::CancelRetrievalRequestPrivate(
    const StorageGatewayRequest::Action action, CancelRetrievalRequest * const q)
    : CancelRetrievalPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelRetrievalRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelRetrievalRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelRetrievalRequest instance.
 */
CancelRetrievalRequestPrivate::CancelRetrievalRequestPrivate(
    const CancelRetrievalRequestPrivate &other, CancelRetrievalRequest * const q)
    : CancelRetrievalPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
