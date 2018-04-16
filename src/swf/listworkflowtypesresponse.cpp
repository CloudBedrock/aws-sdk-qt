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

#include "listworkflowtypesresponse.h"
#include "listworkflowtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListWorkflowTypesResponse
 *
 * \brief The ListWorkflowTypesResponse class provides an interace for SWF ListWorkflowTypes responses.
 *
 * \ingroup SWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::listWorkflowTypes
 */

/*!
 * @brief  Constructs a new ListWorkflowTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListWorkflowTypesResponse::ListWorkflowTypesResponse(
        const ListWorkflowTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListWorkflowTypesResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowTypesRequest(request));
    setReply(reply);
}

const ListWorkflowTypesRequest * ListWorkflowTypesResponse::request() const
{
    Q_D(const ListWorkflowTypesResponse);
    return static_cast<const ListWorkflowTypesRequest *>(d->request);
}

/*!
 * @brief  Parse a SWF ListWorkflowTypes response.
 *
 * @param  response  Response to parse.
 */
void ListWorkflowTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListWorkflowTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListWorkflowTypesResponsePrivate
 *
 * \brief Private implementation for ListWorkflowTypesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListWorkflowTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListWorkflowTypesResponse instance.
 */
ListWorkflowTypesResponsePrivate::ListWorkflowTypesResponsePrivate(
    ListWorkflowTypesResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SWF ListWorkflowTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListWorkflowTypesResponsePrivate::parseListWorkflowTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowTypesResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
