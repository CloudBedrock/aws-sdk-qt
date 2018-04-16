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

#include "gettableversionsrequest.h"
#include "gettableversionsrequest_p.h"
#include "gettableversionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionsRequest
 *
 * \brief The GetTableVersionsRequest class provides an interface for Glue GetTableVersions requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTableVersions
 */

/*!
 * @brief  Constructs a new GetTableVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTableVersionsRequest::GetTableVersionsRequest(const GetTableVersionsRequest &other)
    : GlueRequest(new GetTableVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTableVersionsRequest object.
 */
GetTableVersionsRequest::GetTableVersionsRequest()
    : GlueRequest(new GetTableVersionsRequestPrivate(GlueRequest::GetTableVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTableVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTableVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTableVersionsRequestPrivate
 *
 * @brief  Private implementation for GetTableVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTableVersionsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTableVersionsRequest instance.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GlueRequest::Action action, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTableVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTableVersionsRequest instance.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GetTableVersionsRequestPrivate &other, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
