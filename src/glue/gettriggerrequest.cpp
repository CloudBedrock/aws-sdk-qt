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

#include "gettriggerrequest.h"
#include "gettriggerrequest_p.h"
#include "gettriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggerRequest
 *
 * \brief The GetTriggerRequest class encapsulates Glue GetTrigger requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTrigger
 */

/*!
 * @brief  Constructs a new GetTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTriggerRequest::GetTriggerRequest(const GetTriggerRequest &other)
    : GlueRequest(new GetTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTriggerRequest object.
 */
GetTriggerRequest::GetTriggerRequest()
    : GlueRequest(new GetTriggerRequestPrivate(GlueRequest::GetTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool GetTriggerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTriggerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggerRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTriggerRequestPrivate
 *
 * @brief  Private implementation for GetTriggerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTriggerRequest instance.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GlueRequest::Action action, GetTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTriggerRequest instance.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GetTriggerRequestPrivate &other, GetTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
