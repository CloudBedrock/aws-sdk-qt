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

#include "createconditionalforwarderrequest.h"
#include "createconditionalforwarderrequest_p.h"
#include "createconditionalforwarderresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  CreateConditionalForwarderRequest
 *
 * @brief  Implements DirectoryService CreateConditionalForwarder requests.
 *
 * @see    DirectoryServiceClient::createConditionalForwarder
 */

/**
 * @brief  Constructs a new CreateConditionalForwarderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConditionalForwarderRequest::CreateConditionalForwarderRequest(const CreateConditionalForwarderRequest &other)
    : DirectoryServiceRequest(new CreateConditionalForwarderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConditionalForwarderRequest object.
 */
CreateConditionalForwarderRequest::CreateConditionalForwarderRequest()
    : DirectoryServiceRequest(new CreateConditionalForwarderRequestPrivate(DirectoryServiceRequest::CreateConditionalForwarderAction, this))
{

}

bool CreateConditionalForwarderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConditionalForwarderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConditionalForwarderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConditionalForwarderRequest::response(QNetworkReply * const reply) const
{
    return new CreateConditionalForwarderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConditionalForwarderRequestPrivate
 *
 * @brief  Private implementation for CreateConditionalForwarderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConditionalForwarderRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CreateConditionalForwarderRequest instance.
 */
CreateConditionalForwarderRequestPrivate::CreateConditionalForwarderRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateConditionalForwarderRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConditionalForwarderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConditionalForwarderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConditionalForwarderRequest instance.
 */
CreateConditionalForwarderRequestPrivate::CreateConditionalForwarderRequestPrivate(
    const CreateConditionalForwarderRequestPrivate &other, CreateConditionalForwarderRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
