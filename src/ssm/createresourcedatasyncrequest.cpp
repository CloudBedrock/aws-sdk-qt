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

#include "createresourcedatasyncrequest.h"
#include "createresourcedatasyncrequest_p.h"
#include "createresourcedatasyncresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  CreateResourceDataSyncRequest
 *
 * @brief  Implements SSM CreateResourceDataSync requests.
 *
 * @see    SSMClient::createResourceDataSync
 */

/**
 * @brief  Constructs a new CreateResourceDataSyncResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceDataSyncResponse::CreateResourceDataSyncResponse(

/**
 * @brief  Constructs a new CreateResourceDataSyncRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceDataSyncRequest::CreateResourceDataSyncRequest(const CreateResourceDataSyncRequest &other)
    : SSMRequest(new CreateResourceDataSyncRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceDataSyncRequest object.
 */
CreateResourceDataSyncRequest::CreateResourceDataSyncRequest()
    : SSMRequest(new CreateResourceDataSyncRequestPrivate(SSMRequest::CreateResourceDataSyncAction, this))
{

}

bool CreateResourceDataSyncRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceDataSyncResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceDataSyncResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * CreateResourceDataSyncRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDataSyncResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceDataSyncRequestPrivate
 *
 * @brief  Private implementation for CreateResourceDataSyncRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDataSyncRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateResourceDataSyncRequest instance.
 */
CreateResourceDataSyncRequestPrivate::CreateResourceDataSyncRequestPrivate(
    const SSMRequest::Action action, CreateResourceDataSyncRequest * const q)
    : CreateResourceDataSyncPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDataSyncRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDataSyncRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceDataSyncRequest instance.
 */
CreateResourceDataSyncRequestPrivate::CreateResourceDataSyncRequestPrivate(
    const CreateResourceDataSyncRequestPrivate &other, CreateResourceDataSyncRequest * const q)
    : CreateResourceDataSyncPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
