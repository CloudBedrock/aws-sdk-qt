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

#include "deletelaunchtemplaterequest.h"
#include "deletelaunchtemplaterequest_p.h"
#include "deletelaunchtemplateresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteLaunchTemplateRequest
 *
 * @brief  Implements EC2 DeleteLaunchTemplate requests.
 *
 * @see    EC2Client::deleteLaunchTemplate
 */

/**
 * @brief  Constructs a new DeleteLaunchTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLaunchTemplateRequest::DeleteLaunchTemplateRequest(const DeleteLaunchTemplateRequest &other)
    : EC2Request(new DeleteLaunchTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLaunchTemplateRequest object.
 */
DeleteLaunchTemplateRequest::DeleteLaunchTemplateRequest()
    : EC2Request(new DeleteLaunchTemplateRequestPrivate(EC2Request::DeleteLaunchTemplateAction, this))
{

}

bool DeleteLaunchTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLaunchTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLaunchTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteLaunchTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLaunchTemplateRequestPrivate
 *
 * @brief  Private implementation for DeleteLaunchTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchTemplateRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteLaunchTemplateRequest instance.
 */
DeleteLaunchTemplateRequestPrivate::DeleteLaunchTemplateRequestPrivate(
    const EC2Request::Action action, DeleteLaunchTemplateRequest * const q)
    : DeleteLaunchTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLaunchTemplateRequest instance.
 */
DeleteLaunchTemplateRequestPrivate::DeleteLaunchTemplateRequestPrivate(
    const DeleteLaunchTemplateRequestPrivate &other, DeleteLaunchTemplateRequest * const q)
    : DeleteLaunchTemplatePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
