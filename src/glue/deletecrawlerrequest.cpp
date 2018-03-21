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

#include "deletecrawlerrequest.h"
#include "deletecrawlerrequest_p.h"
#include "deletecrawlerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteCrawlerRequest
 *
 * @brief  Implements Glue DeleteCrawler requests.
 *
 * @see    GlueClient::deleteCrawler
 */

/**
 * @brief  Constructs a new DeleteCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCrawlerResponse::DeleteCrawlerResponse(

/**
 * @brief  Constructs a new DeleteCrawlerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCrawlerRequest::DeleteCrawlerRequest(const DeleteCrawlerRequest &other)
    : GlueRequest(new DeleteCrawlerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCrawlerRequest object.
 */
DeleteCrawlerRequest::DeleteCrawlerRequest()
    : GlueRequest(new DeleteCrawlerRequestPrivate(GlueRequest::DeleteCrawlerAction, this))
{

}

bool DeleteCrawlerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCrawlerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCrawlerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCrawlerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCrawlerRequestPrivate
 *
 * @brief  Private implementation for DeleteCrawlerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCrawlerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteCrawlerRequest instance.
 */
DeleteCrawlerRequestPrivate::DeleteCrawlerRequestPrivate(
    const GlueRequest::Action action, DeleteCrawlerRequest * const q)
    : DeleteCrawlerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCrawlerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCrawlerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCrawlerRequest instance.
 */
DeleteCrawlerRequestPrivate::DeleteCrawlerRequestPrivate(
    const DeleteCrawlerRequestPrivate &other, DeleteCrawlerRequest * const q)
    : DeleteCrawlerPrivate(other, q)
{

}
