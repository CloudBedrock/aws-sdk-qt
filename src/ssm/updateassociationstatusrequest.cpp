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

#include "updateassociationstatusrequest.h"
#include "updateassociationstatusrequest_p.h"
#include "updateassociationstatusresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  UpdateAssociationStatusRequest
 *
 * @brief  Implements SSM UpdateAssociationStatus requests.
 *
 * @see    SSMClient::updateAssociationStatus
 */

/**
 * @brief  Constructs a new UpdateAssociationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssociationStatusResponse::UpdateAssociationStatusResponse(

/**
 * @brief  Constructs a new UpdateAssociationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAssociationStatusRequest::UpdateAssociationStatusRequest(const UpdateAssociationStatusRequest &other)
    : SSMRequest(new UpdateAssociationStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAssociationStatusRequest object.
 */
UpdateAssociationStatusRequest::UpdateAssociationStatusRequest()
    : SSMRequest(new UpdateAssociationStatusRequestPrivate(SSMRequest::UpdateAssociationStatusAction, this))
{

}

bool UpdateAssociationStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAssociationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAssociationStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * UpdateAssociationStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssociationStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAssociationStatusRequestPrivate
 *
 * @brief  Private implementation for UpdateAssociationStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationStatusRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateAssociationStatusRequest instance.
 */
UpdateAssociationStatusRequestPrivate::UpdateAssociationStatusRequestPrivate(
    const SSMRequest::Action action, UpdateAssociationStatusRequest * const q)
    : UpdateAssociationStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssociationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAssociationStatusRequest instance.
 */
UpdateAssociationStatusRequestPrivate::UpdateAssociationStatusRequestPrivate(
    const UpdateAssociationStatusRequestPrivate &other, UpdateAssociationStatusRequest * const q)
    : UpdateAssociationStatusPrivate(other, q)
{

}
