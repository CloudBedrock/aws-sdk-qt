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

#include "getsubscriptiondefinitionversionrequest.h"
#include "getsubscriptiondefinitionversionrequest_p.h"
#include "getsubscriptiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionVersionRequest
 *
 * \brief The GetSubscriptionDefinitionVersionRequest class encapsulates Greengrass GetSubscriptionDefinitionVersion requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getSubscriptionDefinitionVersion
 */

/*!
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest(const GetSubscriptionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequest object.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSubscriptionDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionDefinitionVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSubscriptionDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionDefinitionVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionDefinitionVersionRequest instance.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionDefinitionVersionRequest instance.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GetSubscriptionDefinitionVersionRequestPrivate &other, GetSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
